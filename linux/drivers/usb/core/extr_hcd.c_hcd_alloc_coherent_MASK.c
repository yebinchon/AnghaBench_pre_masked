
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vaddr ;
struct usb_bus {int dummy; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (struct usb_bus*,size_t,int ,int *) ;
 int FUNC_2 (unsigned char*,void*,size_t) ;
 int FUNC_3 (unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct usb_bus *VAR_3,
         gfp_t VAR_4, dma_addr_t *VAR_5,
         void **VAR_6, size_t VAR_7,
         enum dma_data_direction VAR_8)
{
 unsigned char *VAR_9;

 if (*VAR_6 == ((void*)0)) {
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_9 = FUNC_1(VAR_3, VAR_7 + sizeof(VAR_9),
     VAR_4, VAR_5);
 if (!VAR_9)
  return -VAR_2;
 FUNC_3((unsigned long)*VAR_6,
        (unsigned long *)(VAR_9 + VAR_7));

 if (VAR_8 == VAR_0)
  FUNC_2(VAR_9, *VAR_6, VAR_7);

 *VAR_6 = VAR_9;
 return 0;
}
