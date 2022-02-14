
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvcg_mjpeg {int fmt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct uvcg_mjpeg* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static inline ssize_t
FUNC_2(struct config_item *VAR_0,
         const char *VAR_1, size_t VAR_2)
{
 struct uvcg_mjpeg *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(&VAR_3->fmt, VAR_1, VAR_2);
}
