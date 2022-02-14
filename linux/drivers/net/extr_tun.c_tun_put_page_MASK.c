
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_page {int count; scalar_t__ page; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct tun_page *VAR_0)
{
 if (VAR_0->page)
  FUNC_0(VAR_0->page, VAR_0->count);
}
