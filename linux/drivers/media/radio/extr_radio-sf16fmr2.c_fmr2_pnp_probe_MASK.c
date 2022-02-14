
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_device_id {int dummy; } ;
struct pnp_dev {int dev; } ;
struct fmr2 {int is_fmd2; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fmr2** VAR_2 ;
 int FUNC_0 (struct fmr2*,int *,int ) ;
 int FUNC_1 (struct fmr2*) ;
 struct fmr2* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct pnp_dev*,int ) ;
 int FUNC_4 (struct pnp_dev*,struct fmr2*) ;

__attribute__((used)) static int FUNC_5(struct pnp_dev *VAR_4, const struct pnp_device_id *VAR_5)
{
 int VAR_6;
 struct fmr2 *VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->is_fmd2 = 1;
 VAR_6 = FUNC_0(VAR_7, &VAR_4->dev, FUNC_3(VAR_4, 0));
 if (VAR_6) {
  FUNC_1(VAR_7);
  return VAR_6;
 }
 FUNC_4(VAR_4, VAR_7);
 VAR_2[VAR_3++] = VAR_7;

 return 0;
}
