
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int * brd_info; scalar_t__ num_of_brd_entries; } ;
struct firmware {size_t size; void* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,int ) ;
 int FUNC_3 (struct wil6210_priv*,char*,char const*,size_t) ;
 int FUNC_4 (struct wil6210_priv*,char*,char const*,int) ;
 int FUNC_5 (struct wil6210_priv*,void const*,int,int) ;
 int FUNC_6 (struct wil6210_priv*,void const*,size_t) ;
 int FUNC_7 (struct wil6210_priv*) ;

int FUNC_8(struct wil6210_priv *VAR_0, const char *VAR_1,
    bool VAR_2)
{
 int VAR_3, VAR_4;
 const struct firmware *VAR_5;
 size_t VAR_6;
 const void *VAR_7;

 VAR_3 = FUNC_2(&VAR_5, VAR_1, FUNC_7(VAR_0));
 if (VAR_3) {
  FUNC_4(VAR_0, "Failed to load firmware %s rc %d\n", VAR_1, VAR_3);
  return VAR_3;
 }
 FUNC_3(VAR_0, "Loading <%s>, %zu bytes\n", VAR_1, VAR_5->size);


 VAR_0->num_of_brd_entries = 0;
 FUNC_0(VAR_0->brd_info);
 VAR_0->brd_info = ((void*)0);

 for (VAR_6 = VAR_5->size, VAR_7 = VAR_5->data; VAR_6; VAR_6 -= VAR_4, VAR_7 += VAR_4) {
  VAR_4 = FUNC_6(VAR_0, VAR_7, VAR_6);
  if (VAR_4 < 0) {
   VAR_3 = VAR_4;
   goto out;
  }
  VAR_3 = FUNC_5(VAR_0, VAR_7, VAR_4, VAR_2);
  if (VAR_3 < 0)
   goto out;
 }

out:
 FUNC_1(VAR_5);
 if (VAR_3)
  FUNC_4(VAR_0, "Loading <%s> failed, rc %d\n", VAR_1, VAR_3);
 return VAR_3;
}
