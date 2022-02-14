
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {struct xpc_channel* channels; } ;
struct xpc_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xpc_channel*,int) ;
 int FUNC_1 (struct xpc_channel*) ;
 int FUNC_2 (struct xpc_channel*) ;
 int FUNC_3 (struct xpc_channel*) ;

__attribute__((used)) static void
FUNC_4(struct xpc_partition *VAR_2, int VAR_3)
{
 struct xpc_channel *VAR_4 = &VAR_2->channels[VAR_3];
 int VAR_5;

 FUNC_2(VAR_4);

 VAR_5 = FUNC_3(VAR_4);

 if (VAR_5 > 0 &&
     (VAR_4->flags & VAR_0) &&
     (VAR_4->flags & VAR_1)) {

  FUNC_0(VAR_4, VAR_5);
 }

 FUNC_1(VAR_4);
}
