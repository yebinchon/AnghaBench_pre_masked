
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsibk_info {int v2p_lock; } ;
struct v2p_entry {int dummy; } ;
struct ids_tuple {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v2p_entry*) ;
 struct v2p_entry* FUNC_1 (struct vscsibk_info*,struct ids_tuple*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vscsibk_info *VAR_1,
       struct ids_tuple *VAR_2)
{
 struct v2p_entry *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_1->v2p_lock, VAR_4);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_3);
 else
  VAR_5 = -VAR_0;

 FUNC_3(&VAR_1->v2p_lock, VAR_4);
 return VAR_5;
}
