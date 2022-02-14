
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_perms {int ioctlm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct ap_perms *VAR_5,
         unsigned int VAR_6)
{
 int VAR_7 = -VAR_2;
 int VAR_8 = (VAR_6 & VAR_3) >> VAR_4;

 if (VAR_8 > 0 && VAR_8 < VAR_0) {
  if (FUNC_1(VAR_8, VAR_5->ioctlm))
   VAR_7 = 0;
 }

 if (VAR_7)
  FUNC_0(VAR_1,
      "ioctl check failed: ioctlnr=0x%04x rc=%d\n",
      VAR_8, VAR_7);

 return VAR_7;
}
