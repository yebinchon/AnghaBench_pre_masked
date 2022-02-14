
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {unsigned int nbufs; scalar_t__ buffer_mode; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct mcam_camera*) ;
 int FUNC_2 (struct mcam_camera*,unsigned int) ;
 int FUNC_3 (struct mcam_camera*,int ,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;

int FUNC_6(struct mcam_camera *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11 = 0;

 FUNC_3(VAR_8, VAR_7, VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_8->nbufs; VAR_10++)
  if (VAR_9 & (VAR_4 << VAR_10) &&
   FUNC_5(VAR_2 + VAR_10, &VAR_8->flags)) {
   FUNC_2(VAR_8, VAR_10);
   VAR_11 = 1;
   FUNC_0(VAR_2 + VAR_10, &VAR_8->flags);
   if (VAR_8->buffer_mode == VAR_0)
    break;
  }





 for (VAR_10 = 0; VAR_10 < VAR_8->nbufs; VAR_10++) {
  if (VAR_9 & (VAR_6 << VAR_10)) {
   FUNC_4(VAR_2 + VAR_10, &VAR_8->flags);
   VAR_11 = VAR_5;
  }
 }

 if (VAR_11 == VAR_5) {
  FUNC_4(VAR_1, &VAR_8->flags);
  if (VAR_8->buffer_mode == VAR_0)
   FUNC_1(VAR_8);
 }
 return VAR_11;
}
