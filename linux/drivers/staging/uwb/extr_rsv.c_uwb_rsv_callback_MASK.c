
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {int (* callback ) (struct uwb_rsv*) ;} ;


 int FUNC_0 (struct uwb_rsv*) ;

__attribute__((used)) static void FUNC_1(struct uwb_rsv *VAR_0)
{
 if (VAR_0->callback)
  VAR_0->callback(VAR_0);
}
