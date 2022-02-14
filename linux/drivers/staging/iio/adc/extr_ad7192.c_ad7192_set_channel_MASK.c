
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int dummy; } ;
struct ad7192_state {int conf; int sd; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int ) ;
 struct ad7192_state* FUNC_2 (struct ad_sigma_delta*) ;

__attribute__((used)) static int FUNC_3(struct ad_sigma_delta *VAR_2, unsigned int VAR_3)
{
 struct ad7192_state *VAR_4 = FUNC_2(VAR_2);

 VAR_4->conf &= ~VAR_0;
 VAR_4->conf |= FUNC_0(VAR_3);

 return FUNC_1(&VAR_4->sd, VAR_1, 3, VAR_4->conf);
}
