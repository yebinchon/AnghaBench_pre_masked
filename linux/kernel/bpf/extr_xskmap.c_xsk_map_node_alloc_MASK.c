
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_map_node {struct xdp_sock** map_entry; struct xsk_map* map; } ;
struct xsk_map {int dummy; } ;
struct xdp_sock {int dummy; } ;


 int VAR_0 ;
 struct xsk_map_node* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xsk_map_node*) ;
 struct xsk_map_node* FUNC_2 (int,int) ;
 int FUNC_3 (struct xsk_map*) ;

__attribute__((used)) static struct xsk_map_node *FUNC_4(struct xsk_map *VAR_3,
            struct xdp_sock **VAR_4)
{
 struct xsk_map_node *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1 | VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return FUNC_0(VAR_6);
 }

 VAR_5->map = VAR_3;
 VAR_5->map_entry = VAR_4;
 return VAR_5;
}
