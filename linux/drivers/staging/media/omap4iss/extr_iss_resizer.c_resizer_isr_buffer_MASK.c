
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_resizer_device {int video_out; } ;
struct iss_buffer {int iss_addr; } ;


 struct iss_buffer* FUNC_0 (int *) ;
 int FUNC_1 (struct iss_resizer_device*,int) ;
 int FUNC_2 (struct iss_resizer_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct iss_resizer_device *VAR_0)
{
 struct iss_buffer *VAR_1;




 FUNC_1(VAR_0, 0);

 VAR_1 = FUNC_0(&VAR_0->video_out);
 if (!VAR_1)
  return;

 FUNC_2(VAR_0, VAR_1->iss_addr);

 FUNC_1(VAR_0, 1);
}
