
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int dummy; } ;
struct ks_sdio_card {int priv; } ;
struct TYPE_2__ {void* event; void* size; } ;
struct hostif_stop_request {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hostif_stop_request*) ;
 struct hostif_stop_request* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sdio_func*) ;
 struct ks_sdio_card* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct sdio_func *VAR_3)
{
 struct hostif_stop_request *VAR_4;
 struct ks_sdio_card *VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_5(VAR_3);

 VAR_4 = FUNC_3(FUNC_1(sizeof(*VAR_4)), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = sizeof(*VAR_4) - sizeof(VAR_4->header.size);
 VAR_4->header.size = FUNC_0(VAR_6);
 VAR_4->header.event = FUNC_0(VAR_2);

 FUNC_4(VAR_3);
 FUNC_7(VAR_5->priv, (u8 *)VAR_4, FUNC_1(sizeof(*VAR_4)));
 FUNC_6(VAR_3);

 FUNC_2(VAR_4);
 return 0;
}
