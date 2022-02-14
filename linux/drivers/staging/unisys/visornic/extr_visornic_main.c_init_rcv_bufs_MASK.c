
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visornic_devdata {int num_rcv_bufs; int ** rcvbuf; int cmdrsp_rcv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct visornic_devdata*,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
    struct visornic_devdata *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;




 for (VAR_3 = 0; VAR_3 < VAR_2->num_rcv_bufs; VAR_3++) {
  VAR_2->rcvbuf[VAR_3] = FUNC_0(VAR_1);

  if (!VAR_2->rcvbuf[VAR_3])
   break;
 }

 if (VAR_3 == 0)
  return -VAR_0;
 VAR_5 = VAR_3;




 if (VAR_5 < ((2 * VAR_2->num_rcv_bufs) / 3)) {

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   FUNC_1(VAR_2->rcvbuf[VAR_3]);
   VAR_2->rcvbuf[VAR_3] = ((void*)0);
  }
  return -VAR_0;
 }





 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_6 = FUNC_2(VAR_2->cmdrsp_rcv, VAR_2,
          VAR_2->rcvbuf[VAR_3]);
  if (!VAR_6)
   continue;






  for (VAR_4 = VAR_3; VAR_4 < VAR_5; VAR_4++) {
   FUNC_1(VAR_2->rcvbuf[VAR_4]);
   VAR_2->rcvbuf[VAR_4] = ((void*)0);
  }
  if (VAR_3 == 0)
   return VAR_6;
  break;
 }

 return 0;
}
