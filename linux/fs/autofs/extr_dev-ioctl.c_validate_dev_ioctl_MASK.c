
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dev_ioctl {scalar_t__ size; int path; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,struct autofs_dev_ioctl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_5, struct autofs_dev_ioctl *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_4("invalid device control module version "
   "supplied for cmd(0x%08x)\n", VAR_5);
  goto out;
 }

 if (VAR_6->size > VAR_3) {
  VAR_7 = FUNC_3(VAR_6->path, VAR_6->size - VAR_3);
  if (VAR_7) {
   FUNC_4(
     "path string terminator missing for cmd(0x%08x)\n",
     VAR_5);
   goto out;
  }

  VAR_7 = FUNC_2(VAR_6->path);
  if (VAR_7) {
   FUNC_4("invalid path supplied for cmd(0x%08x)\n",
    VAR_5);
   goto out;
  }
 } else {
  unsigned int VAR_8 = FUNC_0(VAR_5);

  if (VAR_8 == VAR_1 ||
      VAR_8 == VAR_2 ||
      VAR_8 == VAR_0) {
   VAR_7 = -VAR_4;
   goto out;
  }
 }

 VAR_7 = 0;
out:
 return VAR_7;
}
