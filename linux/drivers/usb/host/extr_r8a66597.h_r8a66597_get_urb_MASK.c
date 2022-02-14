
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct urb {int dummy; } ;
struct r8a66597_td {struct urb* urb; } ;
struct r8a66597 {int dummy; } ;


 struct r8a66597_td* FUNC_0 (struct r8a66597*,int ) ;

__attribute__((used)) static inline struct urb *FUNC_1(struct r8a66597 *VAR_0,
        u16 VAR_1)
{
 struct r8a66597_td *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return (VAR_2 ? VAR_2->urb : ((void*)0));
}
