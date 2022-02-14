
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_device_routes {char* device; TYPE_1__* routes; } ;
struct TYPE_2__ {scalar_t__ dest; scalar_t__* src; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;

void FUNC_3(const struct ni_device_routes *VAR_1, FILE *VAR_2)
{
 FUNC_1(VAR_2,
  "  \"%s\" : {\n"
  "    # dest -> [src0, src1, ...]\n"
  , VAR_1->device);

 unsigned int VAR_3 = 0;

 while (VAR_1->routes[VAR_3].dest != 0) {
  if (!FUNC_2(VAR_1->routes[VAR_3].dest)) {
   FUNC_1(&VAR_0,
    "Invalid NI signal value [%u] for destination %s.[%u]\n",
    VAR_1->routes[VAR_3].dest, VAR_1->device, VAR_3);
   FUNC_0(1);
  }

  FUNC_1(VAR_2, "    %u : [", VAR_1->routes[VAR_3].dest);

  unsigned int VAR_4 = 0;

  while (VAR_1->routes[VAR_3].src[VAR_4] != 0) {
   if (!FUNC_2(VAR_1->routes[VAR_3].src[VAR_4])) {
    FUNC_1(&VAR_0,
     "Invalid NI signal value [%u] for source %s.[%u].[%u]\n",
     VAR_1->routes[VAR_3].src[VAR_4], VAR_1->device, VAR_3, VAR_4);
    FUNC_0(1);
   }

   FUNC_1(VAR_2, "%u,", VAR_1->routes[VAR_3].src[VAR_4]);

   ++VAR_4;
  }
  FUNC_1(VAR_2, "],\n");

  ++VAR_3;
 }
 FUNC_1(VAR_2, "  },\n\n");
}
