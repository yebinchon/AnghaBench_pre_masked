
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_watch {char const* node; void (* callback ) (struct xenbus_watch*,char const*,char const*) ;} ;
struct xenbus_device {int dummy; } ;


 int FUNC_0 (struct xenbus_watch*) ;
 int FUNC_1 (struct xenbus_device*,int,char*,char const*) ;

int FUNC_2(struct xenbus_device *VAR_0, const char *VAR_1,
        struct xenbus_watch *VAR_2,
        void (*VAR_3)(struct xenbus_watch *,
           const char *, const char *))
{
 int VAR_4;

 VAR_2->node = VAR_1;
 VAR_2->callback = VAR_3;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4) {
  VAR_2->node = ((void*)0);
  VAR_2->callback = ((void*)0);
  FUNC_1(VAR_0, VAR_4, "adding watch on %s", VAR_1);
 }

 return VAR_4;
}
