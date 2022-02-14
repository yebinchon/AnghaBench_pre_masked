
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int fw_capabilities; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct wil6210_priv *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_0, VAR_2->fw_capabilities))
  VAR_3--;

 return VAR_3;
}
