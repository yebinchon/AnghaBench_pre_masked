
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resv_map {int refs; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;
struct inode {TYPE_1__ i_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 struct resv_map *VAR_2;

 FUNC_1(VAR_1, 0, VAR_0);







 VAR_2 = (struct resv_map *)(&VAR_1->i_data)->private_data;

 if (VAR_2)
  FUNC_2(&VAR_2->refs);
 FUNC_0(VAR_1);
}
