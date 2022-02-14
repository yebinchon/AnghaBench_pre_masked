
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int orphan_lock; } ;
typedef int ino_t ;


 int FUNC_0 (struct ubifs_info*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ubifs_info *VAR_0, ino_t VAR_1)
{
 bool VAR_2 = 0;

 FUNC_1(&VAR_0->orphan_lock);
 VAR_2 = !!FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->orphan_lock);

 return VAR_2;
}
