
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvcg_uncompressed {int fmt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct uvcg_uncompressed* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static inline ssize_t
FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 struct uvcg_uncompressed *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(&VAR_2->fmt, VAR_1);
}
