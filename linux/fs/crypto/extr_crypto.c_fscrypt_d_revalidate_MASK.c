
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_3, unsigned int VAR_4)
{
 struct dentry *VAR_5;
 int VAR_6;
 int VAR_7;






 if (!(VAR_3->d_flags & VAR_0))
  return 1;
 if (VAR_4 & VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_3(FUNC_0(VAR_5));
 VAR_7 = !FUNC_4(FUNC_0(VAR_5));
 FUNC_2(VAR_5);

 if (VAR_6 < 0)
  return VAR_6;

 return VAR_7;
}
