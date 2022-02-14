
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_interface {int out_cons; int out_prod; char* out; } ;
struct xencons_info {struct xencons_interface* intf; } ;
typedef int XENCONS_RING_IDX ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xencons_info*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct xencons_info *VAR_0,
  const char *VAR_1, int VAR_2)
{
 XENCONS_RING_IDX VAR_3, VAR_4;
 struct xencons_interface *VAR_5 = VAR_0->intf;
 int VAR_6 = 0;

 VAR_3 = VAR_5->out_cons;
 VAR_4 = VAR_5->out_prod;
 FUNC_2();
 FUNC_0((VAR_4 - VAR_3) > sizeof(VAR_5->out));

 while ((VAR_6 < VAR_2) && ((VAR_4 - VAR_3) < sizeof(VAR_5->out)))
  VAR_5->out[FUNC_1(VAR_4++, VAR_5->out)] = VAR_1[VAR_6++];

 FUNC_4();
 VAR_5->out_prod = VAR_4;

 if (VAR_6)
  FUNC_3(VAR_0);
 return VAR_6;
}
