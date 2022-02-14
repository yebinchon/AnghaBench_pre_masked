
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dev_ioctl {scalar_t__ ver_major; scalar_t__ ver_minor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, struct autofs_dev_ioctl *VAR_4)
{
 int VAR_5 = 0;

 if ((VAR_4->ver_major != VAR_0) ||
     (VAR_4->ver_minor > VAR_1)) {
  FUNC_0("ioctl control interface version mismatch: "
   "kernel(%u.%u), user(%u.%u), cmd(0x%08x)\n",
   VAR_0,
   VAR_1,
   VAR_4->ver_major, VAR_4->ver_minor, VAR_3);
  VAR_5 = -VAR_2;
 }


 VAR_4->ver_major = VAR_0;
 VAR_4->ver_minor = VAR_1;

 return VAR_5;
}
