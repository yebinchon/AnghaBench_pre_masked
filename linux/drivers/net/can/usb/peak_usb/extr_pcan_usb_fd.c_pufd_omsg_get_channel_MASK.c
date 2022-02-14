
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcan_ufd_ovr_msg {int channel; } ;



__attribute__((used)) static inline int FUNC_0(struct pcan_ufd_ovr_msg *VAR_0)
{
 return VAR_0->channel & 0xf;
}
