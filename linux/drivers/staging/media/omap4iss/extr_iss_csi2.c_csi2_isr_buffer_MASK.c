
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_csi2_device {int video_out; } ;
struct iss_buffer {int iss_addr; } ;


 int FUNC_0 (struct iss_csi2_device*,int ,int) ;
 int FUNC_1 (struct iss_csi2_device*,int ) ;
 struct iss_buffer* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iss_csi2_device *VAR_0)
{
 struct iss_buffer *VAR_1;

 FUNC_0(VAR_0, 0, 0);

 VAR_1 = FUNC_2(&VAR_0->video_out);





 if (!VAR_1)
  return;

 FUNC_1(VAR_0, VAR_1->iss_addr);
 FUNC_0(VAR_0, 0, 1);
}
