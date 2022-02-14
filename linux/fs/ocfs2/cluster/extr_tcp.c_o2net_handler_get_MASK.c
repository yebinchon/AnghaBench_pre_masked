
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg_handler {int nh_kref; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct o2net_msg_handler* FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct o2net_msg_handler *FUNC_4(u32 VAR_1, u32 VAR_2)
{
 struct o2net_msg_handler *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_1(VAR_1, VAR_2, ((void*)0), ((void*)0));
 if (VAR_3)
  FUNC_0(&VAR_3->nh_kref);
 FUNC_3(&VAR_0);

 return VAR_3;
}
