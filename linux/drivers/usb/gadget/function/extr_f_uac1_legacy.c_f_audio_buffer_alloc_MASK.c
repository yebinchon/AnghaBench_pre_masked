
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_audio_buf {void* buf; } ;


 int VAR_0 ;
 struct f_audio_buf* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct f_audio_buf*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct f_audio_buf *FUNC_3(int VAR_2)
{
 struct f_audio_buf *VAR_3;

 VAR_3 = FUNC_2(sizeof *VAR_3, VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->buf = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3->buf) {
  FUNC_1(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
