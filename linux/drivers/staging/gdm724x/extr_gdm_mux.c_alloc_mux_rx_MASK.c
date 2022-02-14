
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_rx {struct mux_rx* buf; int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mux_rx*) ;
 struct mux_rx* FUNC_1 (int ,int ) ;
 struct mux_rx* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct mux_rx *FUNC_5(void)
{
 struct mux_rx *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->urb = FUNC_3(0, VAR_0);
 VAR_2->buf = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2->urb || !VAR_2->buf) {
  FUNC_4(VAR_2->urb);
  FUNC_0(VAR_2->buf);
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
