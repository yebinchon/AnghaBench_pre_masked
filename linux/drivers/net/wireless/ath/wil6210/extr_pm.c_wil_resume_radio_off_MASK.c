
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int status; int vif_mutex; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;
 int FUNC_4 (struct wil6210_priv*) ;
 int FUNC_5 (struct wil6210_priv*,int,int) ;
 int VAR_0 ;
 int FUNC_6 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_7(struct wil6210_priv *VAR_1)
{
 int VAR_2 = 0;
 bool VAR_3;

 FUNC_3(VAR_1, "Enabling PCIe IRQ\n");
 FUNC_4(VAR_1);





 FUNC_1(&VAR_1->vif_mutex);
 VAR_3 = FUNC_5(VAR_1, 1, 0);
 FUNC_2(&VAR_1->vif_mutex);
 if (VAR_3)
  VAR_2 = FUNC_6(VAR_1);
 else
  FUNC_0(VAR_0, VAR_1->status);

 return VAR_2;
}
