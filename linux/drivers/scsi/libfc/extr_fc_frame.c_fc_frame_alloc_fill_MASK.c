
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int dummy; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;


 struct fc_frame* FUNC_0 (size_t) ;
 int FUNC_1 (struct fc_frame*) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (int ,size_t) ;

struct fc_frame *FUNC_5(struct fc_lport *VAR_0, size_t VAR_1)
{
 struct fc_frame *VAR_2;
 size_t VAR_3;

 VAR_3 = VAR_1 % 4;
 if (VAR_3 != 0)
  VAR_3 = 4 - VAR_3;
 VAR_2 = FUNC_0(VAR_1 + VAR_3);
 if (VAR_2) {
  FUNC_3((char *) FUNC_2(VAR_2) + VAR_1, 0, VAR_3);

  FUNC_4(FUNC_1(VAR_2),
    VAR_1 + sizeof(struct fc_frame_header));
 }
 return VAR_2;
}
