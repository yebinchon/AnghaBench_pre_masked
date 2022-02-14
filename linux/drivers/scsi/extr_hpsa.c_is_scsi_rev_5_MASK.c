
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int* hba_inquiry_data; } ;



__attribute__((used)) static inline int FUNC_0(struct ctlr_info *VAR_0)
{
 if (!VAR_0->hba_inquiry_data)
  return 0;
 if ((VAR_0->hba_inquiry_data[2] & 0x07) == 5)
  return 1;
 return 0;
}
