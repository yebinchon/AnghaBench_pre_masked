
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_fw_record_data {int addr; } ;
struct wil6210_priv {int dummy; } ;


 int FUNC_0 (struct wil6210_priv*,void const*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct wil6210_priv *VAR_0, const void *VAR_1,
     size_t VAR_2)
{
 const struct wil_fw_record_data *VAR_3 = VAR_1;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->addr);
}
