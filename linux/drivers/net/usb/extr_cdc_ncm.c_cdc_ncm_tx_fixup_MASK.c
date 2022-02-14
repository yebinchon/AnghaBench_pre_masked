
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct sk_buff {int dummy; } ;
struct cdc_ncm_ctx {int mtx; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct usbnet*,struct sk_buff*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct sk_buff *
FUNC_5(struct usbnet *VAR_1, struct sk_buff *VAR_2, gfp_t VAR_3)
{
 struct sk_buff *VAR_4;
 struct cdc_ncm_ctx *VAR_5 = (struct cdc_ncm_ctx *)VAR_1->data[0];
 if (VAR_5 == ((void*)0))
  goto error;

 FUNC_3(&VAR_5->mtx);
 VAR_4 = FUNC_0(VAR_1, VAR_2, FUNC_1(VAR_0));
 FUNC_4(&VAR_5->mtx);
 return VAR_4;

error:
 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2);

 return ((void*)0);
}
