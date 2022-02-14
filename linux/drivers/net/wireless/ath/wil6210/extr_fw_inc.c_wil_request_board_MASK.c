
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int dummy; } ;
struct firmware {int data; int size; } ;


 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const**,char const*,int ) ;
 int FUNC_2 (struct wil6210_priv*,int ,int) ;
 int FUNC_3 (struct wil6210_priv*,char*,char const*,int ) ;
 int FUNC_4 (struct wil6210_priv*,char*,char const*,...) ;
 int FUNC_5 (struct wil6210_priv*,int ,int ) ;
 int FUNC_6 (struct wil6210_priv*) ;

int FUNC_7(struct wil6210_priv *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 const struct firmware *VAR_4;

 VAR_2 = FUNC_1(&VAR_4, VAR_1, FUNC_6(VAR_0));
 if (VAR_2) {
  FUNC_4(VAR_0, "Failed to load brd %s\n", VAR_1);
  return VAR_2;
 }
 FUNC_3(VAR_0, "Loading <%s>, %zu bytes\n", VAR_1, VAR_4->size);


 VAR_3 = FUNC_5(VAR_0, VAR_4->data, VAR_4->size);
 if (VAR_3 < 0) {
  VAR_2 = VAR_3;
  goto out;
 }


 VAR_2 = FUNC_2(VAR_0, VAR_4->data, VAR_3);

out:
 FUNC_0(VAR_4);
 if (VAR_2)
  FUNC_4(VAR_0, "Loading <%s> failed, rc %d\n", VAR_1, VAR_2);
 return VAR_2;
}
