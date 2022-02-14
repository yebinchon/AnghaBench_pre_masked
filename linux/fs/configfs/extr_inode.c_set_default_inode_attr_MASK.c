
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_ctime; int i_mtime; int i_atime; int i_mode; } ;


 int FUNC_0 (struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct inode * VAR_0, umode_t VAR_1)
{
 VAR_0->i_mode = VAR_1;
 VAR_0->i_atime = VAR_0->i_mtime =
  VAR_0->i_ctime = FUNC_0(VAR_0);
}
