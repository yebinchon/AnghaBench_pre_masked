
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct zfcp_qdio {struct zfcp_adapter* adapter; TYPE_1__** res_q; } ;
struct zfcp_adapter {int dummy; } ;
struct qdio_buffer_element {scalar_t__ scount; scalar_t__ addr; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {struct qdio_buffer_element* element; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ccw_device*,int ,int ,int,int) ;
 int FUNC_1 (void**,int ,int) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (struct zfcp_adapter*,scalar_t__,int,void**) ;
 int FUNC_6 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_7 (struct zfcp_qdio*,int) ;
 int FUNC_8 (struct zfcp_qdio*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct ccw_device *VAR_3, unsigned int VAR_4,
          int VAR_5, int VAR_6, int VAR_7,
          unsigned long VAR_8)
{
 struct zfcp_qdio *VAR_9 = (struct zfcp_qdio *) VAR_8;
 struct zfcp_adapter *VAR_10 = VAR_9->adapter;
 int VAR_11, VAR_12;

 if (FUNC_3(VAR_4)) {
  if (FUNC_4(VAR_10)) {
   void *VAR_13[VAR_2 + 1];
   struct qdio_buffer_element *VAR_14;
   u64 VAR_15;
   u8 VAR_16;

   FUNC_1(VAR_13, 0,
          VAR_2 * sizeof(void *));
   VAR_14 = VAR_9->res_q[VAR_6]->element;
   VAR_15 = (u64) VAR_14->addr;
   VAR_16 = FUNC_2(VAR_14->scount + 1,
         VAR_2 + 1);


   for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
    VAR_12 = (VAR_6 + VAR_11) %
     VAR_1;
    VAR_13[VAR_11] = VAR_9->res_q[VAR_12];
   }
   FUNC_5(VAR_10, VAR_15, VAR_16, VAR_13);
  }
  FUNC_8(VAR_9, "qdires1", VAR_4);
  return;
 }





 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12 = (VAR_6 + VAR_11) % VAR_1;

  FUNC_7(VAR_9, VAR_12);
 }




 if (FUNC_0(VAR_3, VAR_0, 0, VAR_6, VAR_7))
  FUNC_6(VAR_9->adapter, 0, "qdires2");
}
