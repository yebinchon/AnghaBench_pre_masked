
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {struct dentry* dentry; } ;
struct kstat {int blocks; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct kstat*) ;
 int FUNC_5 (int ,struct kstat*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(const struct path *VAR_0, struct kstat *VAR_1,
       u32 VAR_2, unsigned int VAR_3)
{
 struct dentry *VAR_4 = VAR_0->dentry;
 struct kstat VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(FUNC_1(VAR_4), &VAR_5,
    VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_3(FUNC_0(VAR_4),
          FUNC_2(FUNC_0(VAR_4)));
  FUNC_4(FUNC_0(VAR_4), VAR_1);
  VAR_1->blocks = VAR_5.blocks;
 }
 return VAR_6;
}
