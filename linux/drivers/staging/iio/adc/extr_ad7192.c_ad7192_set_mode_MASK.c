
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int dummy; } ;
struct ad7192_state {int mode; int sd; } ;
typedef enum ad_sigma_delta_mode { ____Placeholder_ad_sigma_delta_mode } ad_sigma_delta_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int ) ;
 struct ad7192_state* FUNC_2 (struct ad_sigma_delta*) ;

__attribute__((used)) static int FUNC_3(struct ad_sigma_delta *VAR_2,
      enum ad_sigma_delta_mode VAR_3)
{
 struct ad7192_state *VAR_4 = FUNC_2(VAR_2);

 VAR_4->mode &= ~VAR_0;
 VAR_4->mode |= FUNC_0(VAR_3);

 return FUNC_1(&VAR_4->sd, VAR_1, 3, VAR_4->mode);
}
