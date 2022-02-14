
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; int max_orphans; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int) ;

__attribute__((used)) static inline int FUNC_1(struct ubifs_info *VAR_1)
{
 int VAR_2 = (VAR_1->leb_size / 2) / VAR_0;

 FUNC_0(VAR_1, VAR_2 < VAR_1->max_orphans);
 return VAR_2;
}
