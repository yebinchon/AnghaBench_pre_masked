
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct goldfish_audio {int buffer_status; int lock; int wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct goldfish_audio*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 struct goldfish_audio *VAR_7 = VAR_5;
 u32 VAR_8;

 FUNC_1(&VAR_7->lock, VAR_6);


 VAR_8 = FUNC_0(VAR_7, VAR_1);
 VAR_8 &= VAR_0;




 if (VAR_8) {
  VAR_7->buffer_status = VAR_8;
  FUNC_3(&VAR_7->wait);
 }

 FUNC_2(&VAR_7->lock, VAR_6);
 return VAR_8 ? VAR_2 : VAR_3;
}
