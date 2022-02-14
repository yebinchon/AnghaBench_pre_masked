
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb_priv {scalar_t__ req; struct ep_data* epdata; } ;
struct kiocb {struct kiocb_priv* private; } ;
struct ep_data {scalar_t__ ep; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct kiocb *VAR_1)
{
 struct kiocb_priv *VAR_2 = VAR_1->private;
 struct ep_data *VAR_3;
 int VAR_4;

 FUNC_1();
 VAR_3 = VAR_2->epdata;

 if (FUNC_0(VAR_3 && VAR_3->ep && VAR_2->req))
  VAR_4 = FUNC_3 (VAR_3->ep, VAR_2->req);
 else
  VAR_4 = -VAR_0;

 FUNC_2();

 return VAR_4;
}
