
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_stream {int id; size_t type; int s_flags; int name; struct cx18* cx; } ;
struct cx18 {struct cx18_stream* streams; } ;


 int FUNC_0 (char*,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct cx18_stream*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct cx18_stream *VAR_5)
{
 struct cx18 *VAR_6 = VAR_5->cx;
 struct cx18_stream *VAR_7;

 VAR_5->id = -1;
 if (VAR_5->type == VAR_0) {




  return;
 }

 if (VAR_5->type == VAR_2 &&
  FUNC_4(VAR_4, &VAR_5->s_flags)) {

  return;
 }
 if (!FUNC_3(VAR_3, &VAR_5->s_flags)) {
  FUNC_0("Release stream %s not in use!\n", VAR_5->name);
  return;
 }

 FUNC_2(VAR_5);







 if (VAR_5->type != VAR_1)
  return;


 VAR_7 = &VAR_6->streams[VAR_0];
 if (FUNC_3(VAR_4, &VAR_7->s_flags)) {
  FUNC_1(VAR_3, &VAR_7->s_flags);
  FUNC_2(VAR_7);
 }


 VAR_7 = &VAR_6->streams[VAR_2];
 if (FUNC_3(VAR_4, &VAR_7->s_flags)) {
  if (VAR_7->id == -1) {




   FUNC_1(VAR_3, &VAR_7->s_flags);
   FUNC_2(VAR_7);
  }
 }
}
