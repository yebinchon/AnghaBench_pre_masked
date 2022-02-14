
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ end; scalar_t__ start; } ;
struct pnp_dev {int dev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,struct resource*,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 struct resource* FUNC_4 (scalar_t__,scalar_t__,char*) ;
 struct resource* FUNC_5 (scalar_t__,scalar_t__,char*) ;
 int FUNC_6 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_7(struct pnp_dev *VAR_2, struct resource *VAR_3, int VAR_4)
{
 char *VAR_5;
 const char *VAR_6 = FUNC_1(&VAR_2->dev);
 resource_size_t VAR_7 = VAR_3->start, VAR_8 = VAR_3->end;
 struct resource *VAR_9;

 VAR_5 = FUNC_3(16, VAR_0);
 if (!VAR_5)
  return;

 FUNC_6(VAR_5, 16, "pnp %s", VAR_6);
 if (VAR_4)
  VAR_9 = FUNC_5(VAR_7, VAR_8 - VAR_7 + 1, VAR_5);
 else
  VAR_9 = FUNC_4(VAR_7, VAR_8 - VAR_7 + 1, VAR_5);
 if (VAR_9)
  VAR_9->flags &= ~VAR_1;
 else
  FUNC_2(VAR_5);






 FUNC_0(&VAR_2->dev, "%pR %s reserved\n", VAR_3,
   VAR_9 ? "has been" : "could not be");
}
