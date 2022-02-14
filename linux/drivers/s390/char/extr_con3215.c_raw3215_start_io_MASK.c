
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_req {int ccws; } ;
struct raw3215_info {int flags; struct raw3215_req* queued_write; int cdev; struct raw3215_req* queued_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct raw3215_info *VAR_3)
{
 struct raw3215_req *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->queued_read;
 if (VAR_4 != ((void*)0) &&
     !(VAR_3->flags & (VAR_2 | VAR_1))) {

  VAR_3->queued_read = ((void*)0);
  VAR_5 = FUNC_0(VAR_3->cdev, VAR_4->ccws,
           (unsigned long) VAR_4, 0, 0);
  if (VAR_5 != 0) {

   VAR_3->queued_read = VAR_4;
  } else {
   VAR_3->flags |= VAR_2;
  }
 }
 VAR_4 = VAR_3->queued_write;
 if (VAR_4 != ((void*)0) &&
     !(VAR_3->flags & (VAR_2 | VAR_0))) {

  VAR_3->queued_write = ((void*)0);
  VAR_5 = FUNC_0(VAR_3->cdev, VAR_4->ccws,
           (unsigned long) VAR_4, 0, 0);
  if (VAR_5 != 0) {

   VAR_3->queued_write = VAR_4;
  } else {
   VAR_3->flags |= VAR_2;
  }
 }
}
