
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xencons_interface {int in_cons; int in_prod; char* in; } ;
struct xencons_info {struct xencons_interface* intf; } ;
typedef int XENCONS_RING_IDX ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xencons_info*) ;
 struct xencons_info* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_1, char *VAR_2, int VAR_3)
{
 struct xencons_interface *VAR_4;
 XENCONS_RING_IDX VAR_5, VAR_6;
 int VAR_7 = 0;
 struct xencons_info *VAR_8 = FUNC_4(VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_4 = VAR_8->intf;

 VAR_5 = VAR_4->in_cons;
 VAR_6 = VAR_4->in_prod;
 FUNC_2();
 FUNC_0((VAR_6 - VAR_5) > sizeof(VAR_4->in));

 while (VAR_5 != VAR_6 && VAR_7 < VAR_3)
  VAR_2[VAR_7++] = VAR_4->in[FUNC_1(VAR_5++, VAR_4->in)];

 FUNC_2();
 VAR_4->in_cons = VAR_5;

 FUNC_3(VAR_8);
 return VAR_7;
}
