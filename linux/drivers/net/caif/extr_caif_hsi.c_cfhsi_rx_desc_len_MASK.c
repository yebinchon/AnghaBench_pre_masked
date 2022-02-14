
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct cfhsi_desc {int header; scalar_t__ offset; scalar_t__* cffrm_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct cfhsi_desc *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 u16 *VAR_7;

 if ((VAR_4->header & ~VAR_2) ||
   (VAR_4->offset > VAR_0)) {

  FUNC_0("Invalid descriptor. %x %x\n", VAR_4->header,
    VAR_4->offset);
  return -VAR_3;
 }


 VAR_7 = VAR_4->cffrm_len;
 while (VAR_6 < VAR_1 && *VAR_7) {
  VAR_5 += *VAR_7;
  VAR_7++;
  VAR_6++;
 }

 if (VAR_5 % 4) {
  FUNC_0("Invalid payload len: %d, ignored.\n", VAR_5);
  return -VAR_3;
 }
 return VAR_5;
}
