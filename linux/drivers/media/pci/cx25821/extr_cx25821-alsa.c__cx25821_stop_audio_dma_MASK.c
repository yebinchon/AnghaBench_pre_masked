
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int dummy; } ;
struct cx25821_audio_dev {struct cx25821_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct cx25821_audio_dev *VAR_10)
{
 struct cx25821_dev *VAR_11 = VAR_10->dev;


 FUNC_0(VAR_1,
   VAR_7 | VAR_6);


 FUNC_0(VAR_8, VAR_9);
 FUNC_0(VAR_0, VAR_5 | VAR_4 |
   VAR_3 | VAR_2);

 return 0;
}
