
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct media_interface {int graph_obj; int links; void* flags; void* type; } ;
struct media_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct media_device*,void*,int *) ;

__attribute__((used)) static void FUNC_2(struct media_device *VAR_0,
     struct media_interface *VAR_1,
     u32 VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 VAR_1->type = VAR_3;
 VAR_1->flags = VAR_4;
 FUNC_0(&VAR_1->links);

 FUNC_1(VAR_0, VAR_2, &VAR_1->graph_obj);
}
