
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1271 {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wl1271*,int ,void*,size_t,size_t) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct wl1271*) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_3, u16 VAR_4, void *VAR_5,
        size_t VAR_6, size_t VAR_7,
        unsigned long VAR_8)
{
 int VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_9 < 0)
  goto fail;


 VAR_8 |= FUNC_0(VAR_0);

 if (VAR_9 >= VAR_2 ||
     !FUNC_2(VAR_9, &VAR_8)) {
  FUNC_3("command execute failure %d", VAR_9);
  VAR_9 = -VAR_1;
  goto fail;
 }
 return VAR_9;
fail:
 FUNC_4(VAR_3);
 return VAR_9;
}
