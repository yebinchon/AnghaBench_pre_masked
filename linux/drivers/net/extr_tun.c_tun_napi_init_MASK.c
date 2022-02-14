
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int dev; } ;
struct tun_file {int napi_enabled; int napi_frags_enabled; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct tun_struct *VAR_2, struct tun_file *VAR_3,
     bool VAR_4, bool VAR_5)
{
 VAR_3->napi_enabled = VAR_4;
 VAR_3->napi_frags_enabled = VAR_4 && VAR_5;
 if (VAR_4) {
  FUNC_1(VAR_2->dev, &VAR_3->napi, VAR_1,
          VAR_0);
  FUNC_0(&VAR_3->napi);
 }
}
