
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct consw {char* (* con_startup ) () ;struct module* owner; } ;
struct con_driver {int flag; char const* desc; int node; int first; int last; int * dev; struct consw const* con; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int * FUNC_4 (int ,int *,int ,struct con_driver*,int ,char*,int) ;
 int FUNC_5 (struct module*) ;
 int FUNC_6 (char*,char const*,int ) ;
 struct con_driver* VAR_8 ;
 char* FUNC_7 () ;
 int FUNC_8 (struct module*) ;
 int VAR_9 ;
 int FUNC_9 (struct con_driver*) ;

__attribute__((used)) static int FUNC_10(const struct consw *VAR_10, int VAR_11, int VAR_12)
{
 struct module *VAR_13 = VAR_10->owner;
 struct con_driver *VAR_14;
 const char *VAR_15;
 int VAR_16, VAR_17;

 FUNC_3();

 if (!FUNC_8(VAR_13))
  return -VAR_5;

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_14 = &VAR_8[VAR_16];


  if (VAR_14->con == VAR_10) {
   VAR_17 = -VAR_3;
   goto err;
  }
 }

 VAR_15 = VAR_10->con_startup();
 if (!VAR_15) {
  VAR_17 = -VAR_5;
  goto err;
 }

 VAR_17 = -VAR_4;

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_14 = &VAR_8[VAR_16];

  if (VAR_14->con == ((void*)0) &&
      !(VAR_14->flag & VAR_2)) {
   VAR_14->con = VAR_10;
   VAR_14->desc = VAR_15;
   VAR_14->node = VAR_16;
   VAR_14->flag = VAR_1 |
                      VAR_0;
   VAR_14->first = VAR_11;
   VAR_14->last = VAR_12;
   VAR_17 = 0;
   break;
  }
 }

 if (VAR_17)
  goto err;

 VAR_14->dev =
  FUNC_4(VAR_9, ((void*)0),
       FUNC_1(0, VAR_14->node),
       VAR_14, VAR_7,
       "vtcon%i", VAR_14->node);
 if (FUNC_0(VAR_14->dev)) {
  FUNC_6("Unable to create device for %s; errno = %ld\n",
   VAR_14->desc, FUNC_2(VAR_14->dev));
  VAR_14->dev = ((void*)0);
 } else {
  FUNC_9(VAR_14);
 }

err:
 FUNC_5(VAR_13);
 return VAR_17;
}
