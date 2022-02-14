
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {int dummy; } ;


 int FUNC_0 (struct nvmet_tcp_queue*) ;

__attribute__((used)) static int FUNC_1(struct nvmet_tcp_queue *VAR_0,
  int VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4 <= 0)
   break;
  (*VAR_2)++;
 }

 return VAR_4;
}
